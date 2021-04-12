/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, NSDate;

@interface IMAttachment : NSObject {

	NSString* _guid;
	NSString* _path;
	BOOL _isSticker;
	BOOL _isTransferComplete;
	NSDate* _createdDate;

}
-(id)description;
-(id)path;
-(id)guid;
-(BOOL)isSticker;
-(id)createdDate;
-(BOOL)isTransferComplete;
-(id)initWithPath:(id)arg1 guid:(id)arg2 ;
-(id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(BOOL)arg4 isTransferComplete:(BOOL)arg5 ;
-(id)fileTransfer;
@end

