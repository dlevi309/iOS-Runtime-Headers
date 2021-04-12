/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FCFeedViewportBookmark : NSObject <NSCopying, NSSecureCoding> {

	NSString* _externalGroupID;
	NSString* _internalGroupID;
	NSString* _articleID;

}

@property (nonatomic,copy,readonly) NSString * externalGroupID;              //@synthesize externalGroupID=_externalGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalGroupID;              //@synthesize internalGroupID=_internalGroupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * articleID;                    //@synthesize articleID=_articleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithExternalGroupID:(id)arg1 internalGroupID:(id)arg2 articleID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)articleID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)externalGroupID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)internalGroupID;
@end

