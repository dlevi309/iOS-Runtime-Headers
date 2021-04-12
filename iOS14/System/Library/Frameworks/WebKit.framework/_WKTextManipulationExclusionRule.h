/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSString;

@interface _WKTextManipulationExclusionRule : NSObject {

	BOOL _isExclusion;
	RetainPtr<NSString>* _elementName;
	RetainPtr<NSString>* _attributeName;
	RetainPtr<NSString>* _attributeValue;
	RetainPtr<NSString>* _className;

}

@property (nonatomic,readonly) BOOL isExclusion;                       //@synthesize isExclusion=_isExclusion - In the implementation block
@property (nonatomic,readonly) NSString * elementName; 
@property (nonatomic,readonly) NSString * attributeName; 
@property (nonatomic,readonly) NSString * attributeValue; 
@property (nonatomic,readonly) NSString * className; 
-(NSString *)attributeValue;
-(NSString *)elementName;
-(NSString *)className;
-(BOOL)isExclusion;
-(id)initExclusion:(BOOL)arg1 forElement:(id)arg2 ;
-(id)initExclusion:(BOOL)arg1 forAttribute:(id)arg2 value:(id)arg3 ;
-(id)initExclusion:(BOOL)arg1 forClass:(id)arg2 ;
-(NSString *)attributeName;
@end

