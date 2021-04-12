/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
*/


@class ASFAsn1Token, NSString;

@interface ASFAsn1ReceiptToken : NSObject {

	unsigned long long mType;
	unsigned long long mTypeVersion;
	ASFAsn1Token* mContentToken;

}

@property (readonly) ASFAsn1Token * contentToken; 
@property (readonly) unsigned long long integerValue; 
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long typeVersion; 
+(id)readFromBuffer:(const char*)arg1 ;
-(id)description;
-(unsigned long long)type;
-(NSString *)stringValue;
-(unsigned long long)integerValue;
-(ASFAsn1Token *)contentToken;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
-(BOOL)contentIsAnInteger;
@end

