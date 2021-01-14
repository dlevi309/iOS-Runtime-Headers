/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface PKCloudRecordArray : NSObject <NSSecureCoding> {

	NSMutableDictionary* _cloudRecordByDatabase;

}

@property (nonatomic,retain) NSMutableDictionary * cloudRecordByDatabase;              //@synthesize cloudRecordByDatabase=_cloudRecordByDatabase - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)allItems;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(NSMutableDictionary *)cloudRecordByDatabase;
-(id)allRecordNames;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(void)applyCloudRecordArray:(id)arg1 ;
-(void)addCloudRecord:(id)arg1 forContainerDatabaseIdentifier:(id)arg2 ;
-(id)allObjectsByDatabaseIdentifier;
-(void)setCloudRecordByDatabase:(NSMutableDictionary *)arg1 ;
-(id)allObjects;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

