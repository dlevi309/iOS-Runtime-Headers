/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)dataRepresentation;
-(id)initWithDataRepresentation:(id)arg1 ;
-(NSString *)stringRepresentation;
-(BOOL)isEqualToTag:(id)arg1 error:(id*)arg2 ;
@end

