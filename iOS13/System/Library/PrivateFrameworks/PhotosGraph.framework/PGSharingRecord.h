/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(NSString *)assetLocalIdentifier;
-(NSArray *)persons;
-(NSString *)momentLocalIdentifier;
-(PGGraphMomentNode *)momentNode;
-(void)setMomentNode:(PGGraphMomentNode *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentLocalIdentifier:(id)arg4 assetLocalIdentifier:(id)arg5 ;
-(id)initWithType:(unsigned long long)arg1 date:(id)arg2 persons:(id)arg3 momentNode:(id)arg4 asset:(id)arg5 ;
-(void)prepareForPersistence;
@end

