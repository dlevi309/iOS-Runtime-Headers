/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface WFCoercionOptions : NSObject <NSCopying> {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(id)new;
+(id)optionsWithDictionary:(id)arg1 ;
+(void)registerDefaultDisallowedCoercionPath:(id)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)optionsByAddingContentsOfOptions:(id)arg1 ;
-(BOOL)coercionPathIsDisallowed:(id)arg1 ;
-(id)preferredTypes;
-(id)itemClassPrioritizationType;
-(void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

