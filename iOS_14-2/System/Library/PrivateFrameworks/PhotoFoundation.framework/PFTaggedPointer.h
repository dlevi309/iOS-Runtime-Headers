/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFTaggedPointer : NSObject {

	SCD_Union_PF6 _payload;

}
+(unsigned short)tag;
+(BOOL)taggedPointersEnabled;
+(id)newInstanceWithPayload:(unsigned long long)arg1 ;
+(id)newInstanceWithSignedPayload:(long long)arg1 ;
-(id)initWithPayload:(unsigned long long)arg1 ;
-(unsigned long long)payload;
-(id)initWithSignedPayload:(long long)arg1 ;
-(long long)signedPayload;
-(BOOL)isTaggedPointer;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

