/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)integerValue;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
-(NSString *)stringValue;
-(id)description;
-(unsigned long long)type;
-(ASFAsn1Token *)contentToken;
-(BOOL)contentIsAnInteger;
@end

