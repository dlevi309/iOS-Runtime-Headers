/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class asn1Token, NSString;

@interface asn1ReceiptToken : NSObject {

	unsigned long long mType;
	unsigned long long mTypeVersion;
	asn1Token* mContentToken;

}

@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long typeVersion; 
@property (readonly) asn1Token * contentToken; 
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long integerValue; 
+(id)readFromBuffer:(const char*)arg1 ;
-(unsigned long long)integerValue;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
-(NSString *)stringValue;
-(id)description;
-(unsigned long long)type;
-(asn1Token *)contentToken;
-(void)dealloc;
@end

