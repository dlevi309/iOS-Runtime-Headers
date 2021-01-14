/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKSource, UIImage, NSDictionary;

@interface HKSourceDataModel : NSObject <NSCopying> {

	BOOL _installed;
	HKSource* _source;
	UIImage* _icon;
	NSDictionary* _purposeStrings;

}

@property (nonatomic,copy,readonly) HKSource * source;              //@synthesize source=_source - In the implementation block
@property (assign) BOOL installed;                                  //@synthesize installed=_installed - In the implementation block
@property (retain) UIImage * icon;                                  //@synthesize icon=_icon - In the implementation block
@property (copy) NSDictionary * purposeStrings;                     //@synthesize purposeStrings=_purposeStrings - In the implementation block
-(id)initWithSource:(id)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(BOOL)installed;
-(id)description;
-(void)setInstalled:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HKSource *)source;
-(void)setPurposeStrings:(NSDictionary *)arg1 ;
-(NSDictionary *)purposeStrings;
@end

