/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/

#import <libobjc.A.dylib/UAPasteboardItemProviding.h>

@class NSString, NSUUID, NSData;

@interface UAPasteboardDataProvider : NSObject <UAPasteboardItemProviding> {

	NSString* _type;
	NSUUID* _uuid;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSUUID * uuid;                           //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSUUID *)uuid;
-(void)setType:(NSString *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(NSString *)type;
-(void)getDataWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithData:(id)arg1 type:(id)arg2 ;
-(void)setUuid:(NSUUID *)arg1 ;
@end

