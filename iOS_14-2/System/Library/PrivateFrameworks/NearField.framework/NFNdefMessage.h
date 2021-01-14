/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NFNdefMessage.h>
@class NSArray;


@protocol NFNdefMessage <NSObject>
@property (nonatomic,readonly) NSArray * records; 
@required
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2;
-(NSArray *)records;
-(id)decode;
-(id)asData;
-(void)addRecord:(id)arg1;
-(id)initWithNDEFMessage:(id)arg1;
-(void)addRecordArray:(id)arg1;

@end


@class NSArray, NSMutableArray, NSString;

@interface NFNdefMessage : NSObject <NSSecureCoding, NFNdefMessage> {

	NSMutableArray* _records;

}

@property (nonatomic,readonly) NSArray * records; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(id)init;
-(NSArray *)records;
-(void)encodeWithCoder:(id)arg1 ;
-(id)decode;
-(NSString *)description;
-(id)asData;
-(id)initWithCoder:(id)arg1 ;
-(void)addRecord:(id)arg1 ;
-(id)initWithNDEFMessage:(id)arg1 ;
-(void)addRecordArray:(id)arg1 ;
@end

