/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSMutableArray, NSArray;

@interface TSWPImageBulletProvider : NSObject {

	NSMutableArray* _images;
	NSMutableArray* _filenames;

}

@property (nonatomic,readonly) NSArray * predefinedImages; 
+(id)sharedInstance;
-(id)p_predefinedImageNames;
-(id)p_pathToPredefinedImages;
-(id)dataForImageBullet:(id)arg1 withContext:(id)arg2 ;
-(NSArray *)predefinedImages;
-(id)dataForDefaultImageBulletWithContext:(id)arg1 ;
@end

