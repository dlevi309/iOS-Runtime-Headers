/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)imagesDir;
-(void)setBalanceClassesForTraining:(BOOL)arg1 ;
-(BOOL)balanceClassesForTraining;
-(NSMutableArray *)classNames;
-(NSMutableDictionary *)folderToImages;
-(vImage_Buffer*)bufferWithPath:(id)arg1 ;
-(NSArray *)imageFileNames;
-(id)dataPointAtIndex:(int)arg1 ;
-(void)setImagesDir:(NSString *)arg1 ;
-(id)initWithFolder:(id)arg1 balanceClassesForTraining:(BOOL)arg2 ;
-(void)setNumberOfClasses:(int)arg1 ;
-(void)setFolderToImages:(NSMutableDictionary *)arg1 ;
-(void)setImageFileNames:(NSArray *)arg1 ;
-(void)setClassNames:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)pathToClassIndex;
-(void)setPathToClassIndex:(NSMutableDictionary *)arg1 ;
-(int)numberOfClasses;
@end

