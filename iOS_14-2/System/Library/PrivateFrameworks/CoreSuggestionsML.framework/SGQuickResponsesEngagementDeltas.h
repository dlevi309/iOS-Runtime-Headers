/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SGQuickResponsesEngagementDeltas : NSObject <NSSecureCoding> {

	int _displayed;
	int _selected;
	int _matched;
	NSString* _response;
	NSString* _lang;

}

@property (nonatomic,readonly) NSString * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSString * lang;                  //@synthesize lang=_lang - In the implementation block
@property (nonatomic,readonly) int displayed;                    //@synthesize displayed=_displayed - In the implementation block
@property (nonatomic,readonly) int selected;                     //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) int matched;                      //@synthesize matched=_matched - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)lang;
-(void)encodeWithCoder:(id)arg1 ;
-(int)selected;
-(NSString *)response;
-(id)initWithCoder:(id)arg1 ;
-(int)matched;
-(int)displayed;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLangResponse:(id)arg1 displayed:(int)arg2 selected:(int)arg3 matched:(int)arg4 ;
-(BOOL)isEqualToQuickResponsesEngagementDeltas:(id)arg1 ;
@end

