/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/


@interface PFTaggedPointer : NSObject {

	SCD_Union_PF6 _payload;

}
+(unsigned short)tag;
+(BOOL)taggedPointersEnabled;
+(id)newInstanceWithPayload:(unsigned long long)arg1 ;
+(id)newInstanceWithSignedPayload:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithPayload:(unsigned long long)arg1 ;
-(unsigned long long)payload;
-(id)initWithSignedPayload:(long long)arg1 ;
-(long long)signedPayload;
-(BOOL)isTaggedPointer;
@end

