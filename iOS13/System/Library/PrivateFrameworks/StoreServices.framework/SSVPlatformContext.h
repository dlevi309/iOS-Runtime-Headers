/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SSVSAPContext;
@class NSString, NSArray, NSDictionary;

@interface SSVPlatformContext : NSObject <NSCopying> {

	NSString* _lookupURLString;
	id<SSVSAPContext> _sapContext;
	NSArray* _signedHeaders;
	NSArray* _signedQueryParameters;
	NSString* _unpersonalizedLookupURLString;

}

@property (nonatomic,readonly) NSDictionary * bagDictionary; 
@property (nonatomic,readonly) NSString * lookupURLString;                            //@synthesize lookupURLString=_lookupURLString - In the implementation block
@property (nonatomic,readonly) NSString * unpersonalizedLookupURLString;              //@synthesize unpersonalizedLookupURLString=_unpersonalizedLookupURLString - In the implementation block
@property (nonatomic,readonly) NSArray * signedHeaders;                               //@synthesize signedHeaders=_signedHeaders - In the implementation block
@property (nonatomic,readonly) NSArray * signedQueryParameters;                       //@synthesize signedQueryParameters=_signedQueryParameters - In the implementation block
@property (nonatomic,retain) id<SSVSAPContext> SAPContext;                            //@synthesize sapContext=_sapContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLookupURL:(id)arg1 unpersonalizedLookupURL:(id)arg2 signedHeaders:(id)arg3 signedQueryParameters:(id)arg4 ;
-(id)initWithBagDictionary:(id)arg1 ;
-(NSDictionary *)bagDictionary;
-(NSString *)lookupURLString;
-(id<SSVSAPContext>)SAPContext;
-(void)setSAPContext:(id<SSVSAPContext>)arg1 ;
-(NSArray *)signedHeaders;
-(NSArray *)signedQueryParameters;
-(NSString *)unpersonalizedLookupURLString;
@end

