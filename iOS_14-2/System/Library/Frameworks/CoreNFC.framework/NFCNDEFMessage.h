/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface NFCNDEFMessage : NSObject <NSSecureCoding> {

	NSArray* _records;

}

@property (nonatomic,copy) NSArray * records;                          //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
+(BOOL)supportsSecureCoding;
+(id)ndefMessageWithData:(id)arg1 ;
+(BOOL)_validateRecords:(id)arg1 fromOriginal:(id)arg2 ;
+(id)_getPayloadsFromNDEFRecords:(id)arg1 ;
-(void)setRecords:(NSArray *)arg1 ;
-(NSArray *)records;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)length;
-(id)description;
-(id)asData;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithRecords:(id)arg1 ;
-(id)initWithEmptyNdefMessage;
-(id)initWithNDEFRecords:(id)arg1 ;
-(id)initWithNFNdefMessage:(id)arg1 ;
-(id)_getURLsFromNDEFMessage:(id)arg1 ;
@end

