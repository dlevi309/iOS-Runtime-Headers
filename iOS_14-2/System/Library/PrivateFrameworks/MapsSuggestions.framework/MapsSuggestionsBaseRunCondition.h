/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsRunCondition.h>

@class NSString;

@interface MapsSuggestionsBaseRunCondition : NSObject <MapsSuggestionsRunCondition> {

	NSString* _name;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(id)initWithName:(id)arg1 ;
-(id)objectForJSON;
-(BOOL)shouldRun;
@end

