/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet, NSString, NSArray;

@interface PKContactPickerItem : NSObject <NSSecureCoding> {

	NSMutableSet* _acceptedValues;
	NSString* _displayName;
	NSString* _submissionValue;
	NSArray* _alternativeAcceptedValues;

}

@property (nonatomic,copy,readonly) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * submissionValue;                  //@synthesize submissionValue=_submissionValue - In the implementation block
@property (nonatomic,readonly) NSArray * alternativeAcceptedValues;              //@synthesize alternativeAcceptedValues=_alternativeAcceptedValues - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)submissionValue;
-(NSString *)displayName;
-(id)acceptedValues;
-(BOOL)isValueAccepted:(id)arg1 ;
-(NSArray *)alternativeAcceptedValues;
@end

