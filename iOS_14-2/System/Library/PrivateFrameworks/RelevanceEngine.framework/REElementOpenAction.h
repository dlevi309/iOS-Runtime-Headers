/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REElementAction.h>

@class NSURL, NSString;

@interface REElementOpenAction : REElementAction {

	NSURL* _url;
	NSString* _applicationID;

}

@property (nonatomic,readonly) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * applicationID;              //@synthesize applicationID=_applicationID - In the implementation block
-(NSString *)applicationID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_performWithContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 applicationID:(id)arg2 ;
@end

