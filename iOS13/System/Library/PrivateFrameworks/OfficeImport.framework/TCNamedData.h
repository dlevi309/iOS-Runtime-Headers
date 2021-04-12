/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSData, NSString;

@interface TCNamedData : NSObject {

	NSData* mData;
	NSString* mName;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * name; 
+(id)namedDataWithData:(id)arg1 named:(id)arg2 ;
-(NSString *)name;
-(NSData *)data;
-(id)initWithData:(id)arg1 named:(id)arg2 ;
@end

