/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <Foundation/NSOperation.h>

@protocol OS_xpc_object;
@class ML3MusicLibrary, NSObject;

@interface ML3MaintenanceTasksOperation : NSOperation {

	ML3MusicLibrary* _library;
	NSObject*<OS_xpc_object> _activity;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                      //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> activity;              //@synthesize activity=_activity - In the implementation block
-(void)main;
-(NSObject*<OS_xpc_object>)activity;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 activity:(id)arg2 ;
@end

