/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HKSource *)source;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(BOOL)installed;
-(void)setInstalled:(BOOL)arg1 ;
-(NSDictionary *)purposeStrings;
-(void)setPurposeStrings:(NSDictionary *)arg1 ;
@end

