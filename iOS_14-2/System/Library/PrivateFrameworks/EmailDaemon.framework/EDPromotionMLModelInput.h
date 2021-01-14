/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSDictionary, NSSet;

@interface EDPromotionMLModelInput : NSObject <MLFeatureProvider> {

	NSDictionary* _header_key_filtered;
	double _to_count;

}

@property (nonatomic,retain) NSDictionary * header_key_filtered;              //@synthesize header_key_filtered=_header_key_filtered - In the implementation block
@property (assign,nonatomic) double to_count;                                 //@synthesize to_count=_to_count - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithHeader_key_filtered:(id)arg1 to_count:(double)arg2 ;
-(NSDictionary *)header_key_filtered;
-(void)setHeader_key_filtered:(NSDictionary *)arg1 ;
-(double)to_count;
-(void)setTo_count:(double)arg1 ;
@end

