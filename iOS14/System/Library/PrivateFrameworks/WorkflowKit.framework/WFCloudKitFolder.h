/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFCloudKitItem.h>

@class CKRecordID, NSData, NSString;

@interface WFCloudKitFolder : NSObject <WFCloudKitItem> {

	unsigned short _icon;
	CKRecordID* _identifier;
	NSData* _recordSystemFieldsData;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned short icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) CKRecordID * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSData * recordSystemFieldsData;              //@synthesize recordSystemFieldsData=_recordSystemFieldsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)properties;
+(id)recordType;
+(BOOL)isFolderRecordID:(id)arg1 ;
+(id)recordIDWithZoneID:(id)arg1 collectionIdentifier:(id)arg2 ;
+(id)collectionIdentifierForRecordID:(id)arg1 ;
-(unsigned short)icon;
-(void)setIcon:(unsigned short)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(NSData *)recordSystemFieldsData;
-(void)setRecordSystemFieldsData:(NSData *)arg1 ;
-(id)initWithCollection:(id)arg1 identifier:(id)arg2 ;
@end
