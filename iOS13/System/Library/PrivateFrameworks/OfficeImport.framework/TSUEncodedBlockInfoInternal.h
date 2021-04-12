/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/TSUEncodedBlockInfo.h>

@class NSString;

@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo> {

	unsigned long long _encodedLength;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long encodedLength;              //@synthesize encodedLength=_encodedLength - In the implementation block
@property (nonatomic,readonly) unsigned long long decodedLength; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)encodedLength;
-(unsigned long long)decodedLength;
-(id)initWithEncodedLength:(unsigned long long)arg1 ;
@end

