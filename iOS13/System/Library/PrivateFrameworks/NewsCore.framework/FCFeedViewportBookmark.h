/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)articleID;
-(NSString *)internalGroupID;
-(id)initWithExternalGroupID:(id)arg1 internalGroupID:(id)arg2 articleID:(id)arg3 ;
-(NSString *)externalGroupID;
@end

