/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _tokenDetailMap;
	NSMutableDictionary* _detailTokenMap;

}
+(BOOL)supportsSecureCoding;
+(id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3 ;
-(id)matchedDetailsForToken:(id)arg1 ;
-(id)tokensForDetail:(id)arg1 ;
-(BOOL)isEqualToMatchedDetails:(id)arg1 ;
-(void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3 ;
-(id)_contactDetailFromContact:(id)arg1 column:(unsigned)arg2 detailEntityId:(id)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

