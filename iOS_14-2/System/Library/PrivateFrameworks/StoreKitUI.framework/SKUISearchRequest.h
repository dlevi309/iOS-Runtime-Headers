/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString, NSURL;

@interface SKUISearchRequest : NSObject <NSCopying> {

	NSNumber* _searchHintIndex;
	NSString* _searchHintOriginalTerm;
	NSString* _term;
	NSURL* _url;

}

@property (nonatomic,copy) NSNumber * searchHintIndex;                     //@synthesize searchHintIndex=_searchHintIndex - In the implementation block
@property (nonatomic,copy) NSString * searchHintOriginalTerm;              //@synthesize searchHintOriginalTerm=_searchHintOriginalTerm - In the implementation block
@property (nonatomic,copy) NSString * term;                                //@synthesize term=_term - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(NSString *)term;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTerm:(NSString *)arg1 ;
-(void)setSearchHintOriginalTerm:(NSString *)arg1 ;
-(void)setSearchHintIndex:(NSNumber *)arg1 ;
-(NSNumber *)searchHintIndex;
-(NSString *)searchHintOriginalTerm;
@end

