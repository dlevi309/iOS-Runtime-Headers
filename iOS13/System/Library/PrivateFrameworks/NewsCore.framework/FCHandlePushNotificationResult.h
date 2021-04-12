/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)wasHandled;
-(NSSet *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSSet *)arg1 ;
-(void)setHandled:(BOOL)arg1 ;
@end

