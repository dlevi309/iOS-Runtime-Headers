/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying> {

	BOOL _handled;
	NSSet* _recordZoneIDs;

}

@property (assign,getter=wasHandled,nonatomic) BOOL handled;              //@synthesize handled=_handled - In the implementation block
@property (nonatomic,retain) NSSet * recordZoneIDs;                       //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
-(NSSet *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSSet *)arg1 ;
-(void)setHandled:(BOOL)arg1 ;
-(BOOL)wasHandled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

