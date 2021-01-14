/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface MLParameterContainer : NSObject <NSSecureCoding> {

	NSMutableDictionary* _currentParameterValues;
	NSArray* _parameterKeys;
	NSDictionary* _parameterDescriptions;

}

@property (nonatomic,retain) NSMutableDictionary * currentParameterValues;              //@synthesize currentParameterValues=_currentParameterValues - In the implementation block
@property (nonatomic,retain) NSArray * parameterKeys;                                   //@synthesize parameterKeys=_parameterKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * parameterDescriptions;                      //@synthesize parameterDescriptions=_parameterDescriptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)parameterContainerFor:(id)arg1 descriptions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)setCurrentValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateParameterValue:(id)arg1 givenConstraint:(id)arg2 ;
-(NSMutableDictionary *)currentParameterValues;
-(void)setCurrentParameterValues:(NSMutableDictionary *)arg1 ;
-(NSArray *)parameterKeys;
-(void)setParameterKeys:(NSArray *)arg1 ;
-(NSDictionary *)parameterDescriptions;
-(void)setParameterDescriptions:(NSDictionary *)arg1 ;
@end

