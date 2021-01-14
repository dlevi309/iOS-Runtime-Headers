/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/TSUEncodedBlockInfo.h>

@class NSString;

@interface TSUEncodedBlockInfoInternal : NSObject <TSUEncodedBlockInfo> {

	unsigned long long _encodedLength;

}

@property (nonatomic,readonly) unsigned long long encodedLength;              //@synthesize encodedLength=_encodedLength - In the implementation block
@property (nonatomic,readonly) unsigned long long decodedLength; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)encodedLength;
-(NSString *)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)decodedLength;
-(id)initWithEncodedLength:(unsigned long long)arg1 ;
@end

