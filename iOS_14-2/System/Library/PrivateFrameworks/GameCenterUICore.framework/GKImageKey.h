/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/


#import <GameCenterUICore/GameCenterUICore-Structs.h>
@class NSString;

@interface GKImageKey : NSObject {

	NSString* _filePath;
	NSString* _cacheKey;
	NSString* _basename;
	NSString* _imageID;
	CGSize _size;

}

@property (nonatomic,retain) NSString * imageID;                 //@synthesize imageID=_imageID - In the implementation block
@property (nonatomic,retain) NSString * basename;                //@synthesize basename=_basename - In the implementation block
@property (nonatomic,readonly) NSString * filePath; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
+(id)fileNameWithIdentifierInImageSource:(id)arg1 ;
+(id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2 ;
-(NSString *)filePath;
-(NSString *)cacheKey;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)imageID;
-(void)setImageID:(NSString *)arg1 ;
-(NSString *)basename;
-(void)setBasename:(NSString *)arg1 ;
@end

