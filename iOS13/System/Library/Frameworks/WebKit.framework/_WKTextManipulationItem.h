/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSString, NSArray;

@interface _WKTextManipulationItem : NSObject {

	RetainPtr<NSString>* _identifier;
	RetainPtr<NSArray<_WKTextManipulationToken *> >* _tokens;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSArray * tokens; 
@property (nonatomic,copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)debugDescription;
-(NSString *)identifier;
-(NSArray *)tokens;
-(id)initWithIdentifier:(id)arg1 tokens:(id)arg2 ;
-(BOOL)isEqualToTextManipulationItem:(id)arg1 includingContentEquality:(BOOL)arg2 ;
-(id)_descriptionPreservingPrivacy:(BOOL)arg1 ;
@end

