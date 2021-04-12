/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSString;

@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding> {

	BOOL _cachedResponse;
	NSArray* _contentTasteItems;
	NSDate* _expirationDate;
	unsigned long long _responseRevisionID;

}

@property (nonatomic,copy) NSArray * contentTasteItems;                                //@synthesize contentTasteItems=_contentTasteItems - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long responseRevisionID;                    //@synthesize responseRevisionID=_responseRevisionID - In the implementation block
@property (assign,getter=isCachedResponse,nonatomic) BOOL cachedResponse;              //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setCachedResponse:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(unsigned long long)responseRevisionID;
-(NSArray *)contentTasteItems;
-(void)setContentTasteItems:(NSArray *)arg1 ;
-(void)setResponseRevisionID:(unsigned long long)arg1 ;
-(BOOL)isCachedResponse;
@end

