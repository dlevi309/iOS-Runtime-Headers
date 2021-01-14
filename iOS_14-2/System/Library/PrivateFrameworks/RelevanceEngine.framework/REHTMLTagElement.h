/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)classes;
-(id)attributes;
-(id)_contentString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTag:(id)arg1 content:(id)arg2 ;
-(id)_prefixContentString;
-(id)_suffixContentString;
-(id)elementByAddingClass:(id)arg1 ;
-(id)elementByAddingClasses:(id)arg1 ;
-(id)elementBySettingClasses:(id)arg1 ;
-(id)elementBySettingAtttibutes:(id)arg1 ;
@end

