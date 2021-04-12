/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(unsigned long long)type;
-(NSString *)stringValue;
-(unsigned long long)integerValue;
-(asn1Token *)contentToken;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
@end

