/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisitIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _hash;
	NSString* _urlString;
	double _visitTime;
	WBSHistoryItem* _associatedHistoryItem;
	WBSHistoryVisit* _associatedHistoryVisit;

}

@property (nonatomic,copy,readonly) NSString * urlString;                           //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) double visitTime;                                    //@synthesize visitTime=_visitTime - In the implementation block
@property (nonatomic,retain) WBSHistoryItem * associatedHistoryItem;                //@synthesize associatedHistoryItem=_associatedHistoryItem - In the implementation block
@property (nonatomic,retain) WBSHistoryVisit * associatedHistoryVisit;              //@synthesize associatedHistoryVisit=_associatedHistoryVisit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)urlString;
-(void)setAssociatedHistoryItem:(WBSHistoryItem *)arg1 ;
-(WBSHistoryVisit *)associatedHistoryVisit;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)visitTime;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURLString:(id)arg1 visitTime:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(WBSHistoryItem *)associatedHistoryItem;
-(void)setAssociatedHistoryVisit:(WBSHistoryVisit *)arg1 ;
@end

