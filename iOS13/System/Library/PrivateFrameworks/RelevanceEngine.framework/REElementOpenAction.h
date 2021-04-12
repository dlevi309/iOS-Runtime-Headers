/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(NSString *)applicationID;
-(void)_performWithContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 applicationID:(id)arg2 ;
@end

