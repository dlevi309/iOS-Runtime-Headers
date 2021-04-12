/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>
#import <MapsSuggestions/MapsSuggestionsFilter.h>

@class NSString;

@interface MapsSuggestionsBlockFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {

	NSString* _name;
	/*^block*/id _block;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)filterWithBlock:(/*^block*/id)arg1 ;
+(BOOL)isEnabled;
-(NSString *)uniqueName;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 name:(id)arg2 ;
-(BOOL)shouldKeepEntry:(id)arg1 ;
@end

