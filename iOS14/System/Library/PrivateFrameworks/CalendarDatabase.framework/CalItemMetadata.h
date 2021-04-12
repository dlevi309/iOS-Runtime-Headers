/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface CalItemMetadata : NSObject <NSSecureCoding> {

	NSDictionary* _x_props;
	int _classification;

}

@property (retain) NSDictionary * x_props;              //@synthesize x_props=_x_props - In the implementation block
@property (assign) int classification;                  //@synthesize classification=_classification - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataWithICSComponent:(id)arg1 ;
+(id)_whitelistedClassesForSecureCoding;
+(id)metadataWithData:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)x_props;
-(int)classification;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentationWithExistingMetaData:(id)arg1 ;
-(void)applyToComponent:(id)arg1 ;
-(void)setClassification:(int)arg1 ;
-(void)setX_props:(NSDictionary *)arg1 ;
-(id)initWithICSComponent:(id)arg1 ;
@end

