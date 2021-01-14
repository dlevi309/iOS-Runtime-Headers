/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_configureImage:(id)arg1 assumePreconfigured:(BOOL)arg2 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(unsigned long long)hash;
-(void)_preheatBitmapData;
-(BOOL)isEqual:(id)arg1 ;
@end

