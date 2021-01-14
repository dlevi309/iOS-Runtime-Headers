/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPFavoritesReplicaRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, MSPVectorTimestamp, MSPPosition, NSString;

@interface _MSPFavoritesReplicaPlaceholderRecord : NSObject <MSPFavoritesReplicaRecord, NSSecureCoding> {

	NSData* _contents;
	MSPVectorTimestamp* _contentsTimestamp;
	MSPPosition* _position;
	MSPVectorTimestamp* _positionTimestamp;

}

@property (nonatomic,readonly) MSPPosition * position;                                   //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) MSPVectorTimestamp * positionTimestamp;                   //@synthesize positionTimestamp=_positionTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSData * contents;                                   //@synthesize contents=_contents - In the implementation block
@property (nonatomic,copy,readonly) MSPVectorTimestamp * contentsTimestamp;              //@synthesize contentsTimestamp=_contentsTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSData *)contents;
-(MSPPosition *)position;
-(id)init;
-(MSPVectorTimestamp *)positionTimestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContents:(id)arg1 contentsTimestamp:(id)arg2 position:(id)arg3 positionTimestamp:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(MSPVectorTimestamp *)contentsTimestamp;
@end

