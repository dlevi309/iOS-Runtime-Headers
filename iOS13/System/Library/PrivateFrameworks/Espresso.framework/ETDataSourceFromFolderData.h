/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataSource.h>

@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface ETDataSourceFromFolderData : NSObject <ETDataSource> {

	BOOL _balanceClassesForTraining;
	int _numberOfClasses;
	NSString* _imagesDir;
	NSMutableDictionary* _folderToImages;
	NSArray* _imageFileNames;
	NSMutableArray* _classNames;
	NSMutableDictionary* _pathToClassIndex;

}

@property (nonatomic,retain) NSString * imagesDir;                                //@synthesize imagesDir=_imagesDir - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * folderToImages;                //@synthesize folderToImages=_folderToImages - In the implementation block
@property (nonatomic,retain) NSArray * imageFileNames;                            //@synthesize imageFileNames=_imageFileNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * classNames;                         //@synthesize classNames=_classNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pathToClassIndex;              //@synthesize pathToClassIndex=_pathToClassIndex - In the implementation block
@property (assign) int numberOfClasses;                                           //@synthesize numberOfClasses=_numberOfClasses - In the implementation block
@property (assign) BOOL balanceClassesForTraining;                                //@synthesize balanceClassesForTraining=_balanceClassesForTraining - In the implementation block
-(int)numberOfDataPoints;
-(int)numberOfClasses;
-(void)setNumberOfClasses:(int)arg1 ;
-(id)dataPointAtIndex:(int)arg1 ;
-(id)initWithFolder:(id)arg1 balanceClassesForTraining:(BOOL)arg2 ;
-(vImage_Buffer*)bufferWithPath:(id)arg1 ;
-(BOOL)balanceClassesForTraining;
-(void)setBalanceClassesForTraining:(BOOL)arg1 ;
-(NSString *)imagesDir;
-(void)setImagesDir:(NSString *)arg1 ;
-(NSMutableDictionary *)folderToImages;
-(void)setFolderToImages:(NSMutableDictionary *)arg1 ;
-(NSArray *)imageFileNames;
-(void)setImageFileNames:(NSArray *)arg1 ;
-(NSMutableArray *)classNames;
-(void)setClassNames:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)pathToClassIndex;
-(void)setPathToClassIndex:(NSMutableDictionary *)arg1 ;
@end

