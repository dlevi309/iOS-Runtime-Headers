/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface ATXModeFeatureSet : NSObject <NSSecureCoding> {

	NSMutableDictionary* _features;

}
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValue:(BOOL)arg1 forBinaryFeatureOfType:(int)arg2 ;
-(void)mergeWithFeatures:(id)arg1 ;
-(BOOL)boolValueForFeatureType:(int)arg1 ;
-(void)setValue:(id)arg1 forFeatureType:(int)arg2 ;
-(id)valueForFeatureType:(int)arg1 ;
-(void)enumerateFeaturesUsingBlock:(/*^block*/id)arg1 ;
@end

