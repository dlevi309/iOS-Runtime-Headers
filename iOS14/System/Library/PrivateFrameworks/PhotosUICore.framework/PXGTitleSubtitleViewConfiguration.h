/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PXTitleSubtitleLabelSpec;

@interface PXGTitleSubtitleViewConfiguration : NSObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	PXTitleSubtitleLabelSpec* _spec;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) PXTitleSubtitleLabelSpec * spec;              //@synthesize spec=_spec - In the implementation block
-(void)setSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(PXTitleSubtitleLabelSpec *)spec;
-(unsigned long long)hash;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

