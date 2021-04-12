/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REHTMLElement.h>

@class NSString, NSArray, NSDictionary;

@interface REHTMLTagElement : REHTMLElement {

	NSString* _tag;
	NSString* _content;
	NSArray* _classes;
	NSDictionary* _attributes;
	NSString* _prefix;
	NSString* _suffix;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)attributes;
-(id)classes;
-(id)_contentString;
-(id)initWithTag:(id)arg1 content:(id)arg2 ;
-(id)_prefixContentString;
-(id)_suffixContentString;
-(id)elementByAddingClass:(id)arg1 ;
-(id)elementByAddingClasses:(id)arg1 ;
-(id)elementBySettingClasses:(id)arg1 ;
-(id)elementBySettingAtttibutes:(id)arg1 ;
@end

