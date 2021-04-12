/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_dispatch_data, OS_nw_content_context;
@class NSObject;

@interface NWMessage : NSObject {

	NSObject*<OS_dispatch_data> _internalContent;
	NSObject*<OS_nw_content_context> _internalContext;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_data> internalContent;                   //@synthesize internalContent=_internalContent - In the implementation block
@property (nonatomic,retain) NSObject*<OS_nw_content_context> internalContext;              //@synthesize internalContext=_internalContext - In the implementation block
-(id)initWithContent:(id)arg1 context:(id)arg2 ;
-(NSObject*<OS_dispatch_data>)internalContent;
-(void)setInternalContent:(NSObject*<OS_dispatch_data>)arg1 ;
-(NSObject*<OS_nw_content_context>)internalContext;
-(void)setInternalContext:(NSObject*<OS_nw_content_context>)arg1 ;
@end

