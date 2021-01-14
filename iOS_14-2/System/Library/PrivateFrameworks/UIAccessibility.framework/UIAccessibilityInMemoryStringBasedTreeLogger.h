/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIKit/UIAccessibilityElementTraversalTreeLogger.h>

@class NSMutableString, NSMutableArray, NSString;

@interface UIAccessibilityInMemoryStringBasedTreeLogger : NSObject <UIAccessibilityElementTraversalTreeLogger> {

	NSMutableString* _stringRepresentation;
	NSMutableArray* _currentPrefix;
	NSString* _prefix;
	NSString* _descriptionKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pop;
-(void)push;
-(id)stringRepresentation;
-(id)init;
-(id)initWithPrefix:(id)arg1 elementDescriptionKey:(id)arg2 ;
-(id)initWithElementDescriptionKey:(id)arg1 ;
-(void)logElement:(id)arg1 ;
-(id)initWithPrefix:(id)arg1 ;
@end

