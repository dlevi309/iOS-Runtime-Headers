/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPHistoryReplicaRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, MSPVectorTimestamp, NSDate, NSString;

@interface _MSPHistoryReplicaPlaceholderRecord : NSObject <MSPHistoryReplicaRecord, NSSecureCoding> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	NSDate* _modificationDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;                           //@synthesize modificationDate=_modificationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)contents;
-(NSDate *)modificationDate;
-(MSPVectorTimestamp *)contentsTimestamp;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 modificationDate:(id)arg3 ;
@end

