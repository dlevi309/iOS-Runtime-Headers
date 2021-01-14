/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REHTMLElement.h>

@class REHTMLElement, NSArray;

@interface REHTMLParentElement : REHTMLElement {

	REHTMLElement* _parent;
	NSArray* _children;

}
-(id)addChildren:(id)arg1 ;
-(id)_encodedData;
-(id)classes;
-(id)attributes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)elementBySettingClasses:(id)arg1 ;
-(id)elementBySettingAtttibutes:(id)arg1 ;
-(id)initWithParents:(id)arg1 children:(id)arg2 ;
@end

