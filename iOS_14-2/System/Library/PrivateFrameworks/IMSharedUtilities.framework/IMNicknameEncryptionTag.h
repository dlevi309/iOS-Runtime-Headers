/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSData, NSString;

@interface IMNicknameEncryptionTag : NSObject {

	NSData* _dataRepresentation;

}

@property (nonatomic,readonly) NSString * stringRepresentation; 
@property (nonatomic,readonly) NSData * dataRepresentation;                  //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
+(id)_tagWithDataRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)_tagWithStringRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSData *)dataRepresentation;
-(NSString *)stringRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqualToTag:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

