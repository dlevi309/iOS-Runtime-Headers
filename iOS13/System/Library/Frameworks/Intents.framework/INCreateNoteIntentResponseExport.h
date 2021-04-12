/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class INNote;


@protocol INCreateNoteIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INNote * createdNote; 
@required
-(long long)code;
-(INNote *)createdNote;
-(void)setCreatedNote:(id)arg1;

@end

