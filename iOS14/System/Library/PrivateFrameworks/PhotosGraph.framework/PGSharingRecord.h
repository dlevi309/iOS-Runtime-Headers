/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, PGGraphMomentNode, NSString, PHAsset;

@interface PGSharingRecord : NSObject <NSSecureCoding> {

	unsigned long long _type;
	NSDate* _date;
	NSArray* _persons;
	PGGraphMomentNode* _momentNode;
	NSString* _momentLocalIdentifier;
	PHAsset* _asset;
	NSString* _assetLocalIdentifier;

}

@property (nonatomic,readonly) NSString * momentLocalIdentifier;              //@synthesize momentLocalIdentifier=_momentLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * assetLocalIdentifier;               //@synthesize assetLocalIdentifier=_assetLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphMomentNode * momentNode;                  //@synthesize momentNode=_momentNode - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSArray * persons;                             //@synthesize persons=_persons - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAsset:(PHAsset *)arg1 ;
-(PGGraphMomentNode *)momentNode;
-(NSArray *)persons;
-(NSString *)momentLocalIdentifier;
-(PHAsset *)asset;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)assetLocalIdentifier;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentLocalIdentifier:(id)arg4 assetLocalIdentifier:(id)arg5 ;
-(id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentNode:(id)arg4 asset:(id)arg5 ;
-(void)prepareForPersistence;
@end

