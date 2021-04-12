/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIImage.h>

@class NSData;

@interface _UIMappedBitmapImage : UIImage {

	NSData* _data;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)_configureImage:(id)arg1 assumePreconfigured:(BOOL)arg2 ;
-(void)_preheatBitmapData;
@end

